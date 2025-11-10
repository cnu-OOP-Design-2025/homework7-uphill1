#include "duck.h"

/* TODO */
void Duck::performFly(){
    if(flyBehavior){
        flyBehavior->fly();
    }
}
/* TODO */
void Duck::performQuack(){
    if(quackBehavior){
        quackBehavior->quack();
    }
}
/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    if(flyBehavior!=fb){
        delete flyBehavior;
        flyBehavior =fb;
    }
}
/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    if(quackBehavior!=qb){
        delete quackBehavior;
        quackBehavior =qb;
    }
}


/* TODO */
MallardDuck::MallardDuck() 
    :Duck(new FlyWithWings(), new Quack()) {}

/* TODO */
RedheadDuck::RedheadDuck() 
    :Duck(new FlyWithWings(), new Quack()) {}

/* TODO */
RubberDuck::RubberDuck() 
    :Duck(new FlyNoWay(), new Squeak()) {}

/* TODO */
DecoyDuck::DecoyDuck() 
    :Duck(new FlyNoWay(), new MuteQuack()) {}

/* TODO */
ModelDuck::ModelDuck() 
    :Duck(new FlyNoWay(), new MuteQuack()) {}
