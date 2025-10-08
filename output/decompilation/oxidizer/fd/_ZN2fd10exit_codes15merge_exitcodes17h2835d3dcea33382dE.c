fn fd::exit_codes::merge_exitcodes(a0: u64) -> long long {
    let v0: struct32;  // [bp-0x28]
    let v2: u64;  // rbx

    v0 = <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(a0);
    v2 = core::iter::traits::iterator::Iterator::any(&v0);
    return v2 & -0x100 | v2 * 2 + 2;
}
