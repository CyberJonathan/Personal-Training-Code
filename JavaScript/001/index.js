console.log(`I like pizza`);
console.log(`but, the pizza have cheese!`);

window.alert(`This is a Alert!`);
window.alert(`So, the google console is working`);

// 
/*
*/

document.getElementById("myFirstH").textContent = `My Website`;
document.getElementById("myFP").textContent = `Topics`;

let x = 12;
let age;

age = 32;
let firstname = "Jonathan"
let funcional = true;
let naofuncional = false;

console.log(typeof age);
console.log(`Your age is ${age}`);
console.log(typeof firstname);
console.log(`My first name is ${firstname}`);

console.log(typeof funcional);
console.log(`My pc works underwater ${naofuncional}`);

console.log(typeof naofuncional);
console.log(`MY pc works in the air ${funcional}`);

    document.getElementById("p1").textContent = firstname;
    document.getElementById("p2").textContent = age;
    document.getElementById("p3").textContent = funcional;

let students;
students = 30 + 1;

console.log(students);
console.log(typeof students);
console.log(`So the numbers of students in my class is ${students + 3}`);

    console.log(`I like a lot of things. like Brazilian Pizza, Curry Chicken.`);
        let favoritefood = "Brazilian Pizza, Curry Chicken";

        console.log(students *= 2);
            console.log(students /= 4); 
                console.log(students += 6);
                    studentsPlus = 15 + 3 * (4 * 4);
                    console.log(typeof studentsPlus);
                    console.log(studentsPlus);

        let username;
            username = window.prompt("What is your name?\n");

            let result;

                do{
                        result = Number(window.prompt("For you use this website, you need to do this aritmethic calculus.\n 3 + 5? \n"));
                    if(result === 7){
                        window.alert(`Very well, you can use this website now!.`);
                    }else{
                        window.alert(`MAnnn, you miss this calculus, try again next time.`);
                    }
                    }while(result !== 7);

                    let passwordM;

                        document.getElementById("fbutton").onclick = function(){

                        passwordM = Number(document.getElementById("Myfinput").value);

                            if(passwordM){
                                window.alert(`So, your password is?${passwordM}.\n To easy hein, lol`);

                                document.getElementById("Myfinput").value = "";
                            }
                            
                        }
