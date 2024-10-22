use std::io;

struct Person {
    name: String,
    age: i64,
}

impl Person {
    #[inline(never)]
    fn new() -> io::Result<Person> {
        let stdin = io::stdin();
        let mut buf = String::new();
        stdin.read_line(&mut buf)?;
        let name = buf;
        let mut buf = String::new();
        stdin.read_line(&mut buf)?;
        let age: i64 = buf.parse().unwrap();
        Ok(Person { name, age })
    }

    #[inline(never)]
    fn print(&self) {
        println!("Name: {}, Age: {}", self.name, self.age);
    }

    #[inline(never)]
    fn change_name(&mut self, new_name: String) {
        self.name = new_name;
    }
}

#[inline(never)]
fn example_argument_ownership_move() {
    let new_name = String::from("new_name");
    Person::new().unwrap().change_name(new_name);
}

#[inline(never)]
fn example_ownership_move() {
    match Person::new() {
        Ok(person) => person.print(),
        Err(..) => panic!(),
    }
}

#[inline(never)]
fn example_deref_coercion() {
    println!(
        "{:?}",
        String::from("This is a deref coercion example").get(1..)
    );
}

fn main() {
    example_argument_ownership_move();
    example_ownership_move();
    example_deref_coercion();
}
