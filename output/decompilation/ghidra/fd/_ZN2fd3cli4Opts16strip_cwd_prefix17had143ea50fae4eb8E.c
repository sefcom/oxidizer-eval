undefined8
_ZN2fd3cli4Opts16strip_cwd_prefix17had143ea50fae4eb8E
          (long param_1,undefined param_2,undefined param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0xb0) == 0) && (*(long *)(param_1 + 200) == 0)) {
    cVar1 = _ZN4core6option15Option_LT_T_GT_6map_or17h0f3e669136a2a298E
                      (*(undefined *)(param_1 + 0x1f7));
    if (cVar1 == '\0') {
      uVar2 = _ZN2fd16construct_config28__u7b__u7b_closure_u7d__u7d_17hc0c2af0721adc740E
                        (param_2,param_3);
      return uVar2;
    }
    if (cVar1 == '\x01') {
      return 1;
    }
  }
  return 0;
}