void _ZN5uu_od9prn_float12format_flo1617hd8d34214ac1f2229E(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  float fVar2;
  double dVar3;
  
  cVar1 = _ZN10std_detect6detect5cache4test17h15354216764ae092E();
  if (cVar1 == '\0') {
    dVar3 = (double)_ZN4half8binary164arch19f16_to_f64_fallback17h99c57f7b07aa0fd1E(param_2);
  }
  else {
    fVar2 = (float)_ZN4half8binary164arch3x8619f16_to_f32_x86_f16c17hae4e4afa5bc8fbe3E();
    dVar3 = (double)fVar2;
  }
  _ZN5uu_od9prn_float12format_float17h341a0cfde1a47520E(dVar3,param_1,9,4);
  return;
}