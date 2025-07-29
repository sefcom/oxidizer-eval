fn backdoorautomater::sanitizer::sanitize_choice(a0: i8, a1: i8) -> u64 {
    if a0 > 4 {
        panic!("Error ! Please choose an option.\n");
    } else if !a0 {
        panic!("Error ! Please choose an option.\n");
    } else if a0 != 4 {
        return a0;
    } else if a1 - 3 >= 2 {
        return a0;
    } else {
        panic!("Error ! Please choose an option.\n");
    }
}
