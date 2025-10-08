undefined8 *
_ZN7uu_tail4args14parse_obsolete17h0a35ef9ac867d2bbE
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined local_50 [24];
  byte local_38 [10];
  char local_2e;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  _ZN7uu_tail5parse14parse_obsolete17h9e4918f448acbdfbE(local_38,uVar1,uVar2);
  if (local_2e != '\x02') {
    if (local_2e == '\x03') {
      *param_1 = 5;
    }
    else {
      (*(code *)PTR__ZN7uu_tail4args8Settings18from_obsolete_args17hfeff493f00111f18E_0027d420)
                (param_1,local_38,param_3);
    }
    return param_1;
  }
  (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_0027d340)
            (local_50,uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0019fe11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar3 = (undefined8 *)
           (*(code *)(&DAT_001231fc + *(int *)(&DAT_001231fc + (ulong)local_38[0] * 4)))();
  return puVar3;
}