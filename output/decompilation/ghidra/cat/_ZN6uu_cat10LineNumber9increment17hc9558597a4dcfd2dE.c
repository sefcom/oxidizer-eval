void _ZN6uu_cat10LineNumber9increment17hc9558597a4dcfd2dE(long param_1)

{
  undefined8 uVar1;
  
  _ZN6uucore8features8fast_inc12fast_inc_one17h07ba73c2abdee31eE
            (param_1,param_1 + 0x28,*(undefined8 *)(param_1 + 0x30));
  uVar1 = _ZN4core3cmp3Ord3min17h0279cc79185d3622E
                    (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}