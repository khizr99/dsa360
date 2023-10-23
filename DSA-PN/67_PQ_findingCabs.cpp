#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
#define pb push_back

class Car{
    public:
        string id;
        int x,y;
        Car(string id, int x, int y){
            this->id = id;
            this->x = x;
            this->y = y;
        }
        int dist() const{
            return x*x + y*y; //square of the distances
        }
};

class CarCompare{
    public:
    bool operator()(const Car A, const Car B){
        return A.dist() < B.dist(); //This comparison is for max_heap
    }
};

void printNearestCars(vector<Car> cars, int k){

    //create a max heap of size k
    priority_queue<Car, vector<Car>, CarCompare> max_heap(cars.begin(),cars.begin()+k);

    //Remaining Cars
    for(int i=k; i<cars.size(); i++){
        auto car = cars[i];

        if(car.dist()< max_heap.top().dist()){
            max_heap.pop(); //remove the root node(i.e largest value)
            max_heap.push(car);
        }
    }

    //Print all the cars inside the heap they will be smallest
    vector<Car> output;
    while(!max_heap.empty()){
        //cout<<max_heap.top().id<<endl;
        output.push_back(max_heap.top());
        max_heap.pop();
    }

    //vector of k nearest car
    reverse(output.begin(),output.end());
    for(auto car: output) cout<<car.id<<endl;
    return;
}
int main(){
    
    int N,K;
    cin>>N>>K;

    string id;
    int x,y;

    vector<Car> cars;
    for(int i=0; i<N; i++){
        cin>>id>>x>>y;
        Car car(id,x,y);
        cars.pb(car);
    }

    printNearestCars(cars,K);
    return 0;
}