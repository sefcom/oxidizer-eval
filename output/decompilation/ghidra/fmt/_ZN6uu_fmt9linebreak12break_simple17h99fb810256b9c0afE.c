undefined8
_ZN6uu_fmt9linebreak12break_simple17h99fb810256b9c0afE
          (undefined8 param_1,undefined8 param_2,long param_3)

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
  _ZN4core4iter6traits8iterator8Iterator8try_fold17h73fbe5cd754a894bE
            (&local_18,&local_28,*(undefined8 *)(param_3 + 0x20),param_3);
  if (local_10 != '\x02') {
    plVar1 = *(long **)(param_3 + 0x18);
    lVar2 = plVar1[2];
    if ((ulong)(*plVar1 - lVar2) < 2) {
      uVar3 = _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_14write_all_cold17ha7722a1d537a2c8aE
                        (plVar1,"\n",1);
      return uVar3;
    }
    *(undefined *)(plVar1[1] + lVar2) = 10;
    plVar1[2] = lVar2 + 1;
    local_18 = 0;
  }
  return local_18;
}