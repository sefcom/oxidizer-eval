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

#[inline(never)]
fn example_dividing_by_zero() {
    let numerator = 10;

    println!("Enter a divisor:");

    let mut input = String::new();
    io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

    // Convert the input to an integer
    let divisor: i32 = match input.trim().parse() {
        Ok(num) => num,
        Err(_) => {
            println!("Please enter a valid integer.");
            return;
        }
    };

    println!("Result: {}", (numerator / divisor));
}

fn main() {
    example_argument_ownership_move();
    example_ownership_move();
    example_deref_coercion();
    example_dividing_by_zero();
}
