fn firecracker::<impl core::convert::From<firecracker::MainError> for vmm::FcExitCode>::from(a0: i64) -> long long {
    let v1: u64;  // rbx
    let v2: Result<struct4, struct8>;  // rbx

    v2 = v1 & -0x100 | 1;
    match (*(a0 as &i32)) {
        2 => {
            break;
        }
        9 => {
            if *((a0 + 8) as &i8) == 29 {
                goto LABEL_55969a;
            }
            goto LABEL_559674;
        }
        10 => {
            if *((a0 + 8) as &i8) == 28 {
LABEL_55969a:
                return *((a0 + 9) as &i8);
            }
            break;
        }
        _ => {
LABEL_559674:
            return v2 & 4294967295;
        }
    }
}
