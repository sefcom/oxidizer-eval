void _ZN5uu_od9prn_float12format_flo1617habda6552607ff1e9E(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  float fVar2;
  double dVar3;
  
  cVar1 = _ZN10std_detect6detect5cache4test17h42d452cfc9d2956fE();
  if (cVar1 == '\0') {
    dVar3 = (double)_ZN4half8binary164arch19f16_to_f64_fallback17h3fc5d8a950fdbd03E(param_2);
  }
  else {
    fVar2 = (float)_ZN4half8binary164arch3x8619f16_to_f32_x86_f16c17hfa00155f589602d7E();
    dVar3 = (double)fVar2;
  }
  _ZN5uu_od9prn_float12format_float17hb20d3bf5c81306f8E(dVar3,param_1,9,4);
  return;
}