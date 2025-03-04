undefined8 *
_ZN7uu_tail4args14parse_obsolete17hfe2542368a23c75bE
          (undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined local_a8 [24];
  byte local_90 [10];
  char local_86;
  
  _ZN7uu_tail5parse14parse_obsolete17h38d0198c01039e5aE(local_90);
  if (local_86 != '\x02') {
    if (local_86 == '\x03') {
      *param_1 = 5;
    }
    else {
      _ZN7uu_tail4args8Settings18from_obsolete_args17hf9c13cdfe31c2b03E(param_1,local_90,param_3);
    }
    return param_1;
  }
  _ZN3std3sys6os_str5bytes5Slice15to_string_lossy17h816275565265bd85E
            (local_a8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001f9da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined8 *)
           (*(code *)(&DAT_001282ec + *(int *)(&DAT_001282ec + (ulong)local_90[0] * 4)))();
  return puVar1;
}