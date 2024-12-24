void __rustcall uu_od::prn_float::format_flo16(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  float fVar2;
  double dVar3;
  
  cVar1 = std_detect::detect::cache::test();
  if (cVar1 == '\0') {
    dVar3 = (double)half::binary16::arch::f16_to_f64_fallback(param_2);
  }
  else {
    fVar2 = (float)half::binary16::arch::x86::f16_to_f32_x86_f16c();
    dVar3 = (double)fVar2;
  }
  format_float(dVar3,param_1,9,4);
  return;
}