undefined8 * __rustcall
uu_tail::args::parse_obsolete(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined local_a8 [24];
  byte local_90 [10];
  char local_86;
  
  uu_tail::parse::parse_obsolete(local_90);
  if (local_86 != '\x02') {
    if (local_86 == '\x03') {
      *param_1 = 5;
    }
    else {
      Settings::from_obsolete_args(param_1,local_90,param_3);
    }
    return param_1;
  }
  std::sys::os_str::bytes::Slice::to_string_lossy
            (local_a8,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x001f9da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined8 *)
           (*(code *)(&DAT_001282ec + *(int *)(&DAT_001282ec + (ulong)local_90[0] * 4)))();
  return puVar1;
}