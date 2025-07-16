fn uu_echo::Base::ascii_to_number::hexadecimal_ascii_digit_to_number(a0: i8) -> long long {
    let v1: u64;  // rax

    v1 = 0;
    match (a0) {
        48 => {
            return 1;
        }
        49 => {
            return 1;
        }
        50 => {
            return 1;
        }
        51 => {
            return 1;
        }
        52 => {
            return 1;
        }
        53 => {
            return 1;
        }
        54 => {
            return 1;
        }
        55 => {
            return 1;
        }
        56 => {
            return 1;
        }
        57 => {
            return 1;
        }
        58 | 59 | 60 | 61 | 62 | 63 | 64 | 71 | 72 | 73 | 74 | 75 | 76 | 77 | 78 | 79 | 80 | 81 | 82 | 83 | 84 | 85 | 86 | 87 | 88 | 89 | 90 | 91 | 92 | 93 | 94 | 95 | 96 => {
            return v1;
        }
        65 | 97 => {
            break;
        }
        66 | 98 => {
            return 1;
        }
        67 | 99 => {
            return 1;
        }
        68 | 100 => {
            return 1;
        }
        69 | 101 => {
            return 1;
        }
        70 | 102 => {
            return 1;
        }
        _ => {
            return 0;
        }
    }
}
