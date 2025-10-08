
  fn zoxide::cmd::import::sigmoid::h4104d738136ae795(arg1: [u64; 0x2] @ zmm0) -> f64

{
    let zmm1: f64 = 1.0;
    zmm1 / (exp(__xorpd_xmmxuq_memxuq(arg1, data_418d00)[0]) + zmm1)
}
