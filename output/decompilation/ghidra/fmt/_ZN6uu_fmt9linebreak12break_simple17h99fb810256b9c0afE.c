undefined8 __rustcall
uu_fmt::linebreak::break_simple(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  char local_10;
  
  local_28 = param_1;
  local_20 = param_2;
  core::iter::traits::iterator::Iterator::try_fold
            (&local_18,&local_28,*(undefined8 *)(param_3 + 0x20),param_3);
  if (local_10 != '\x02') {
    plVar1 = *(long **)(param_3 + 0x18);
    lVar2 = plVar1[2];
    if ((ulong)(*plVar1 - lVar2) < 2) {
      uVar3 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(plVar1,"\n",1);
      return uVar3;
    }
    *(undefined *)(plVar1[1] + lVar2) = 10;
    plVar1[2] = lVar2 + 1;
    local_18 = 0;
  }
  return local_18;
}