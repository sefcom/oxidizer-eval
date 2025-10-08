void _ZN8uu_chcon3fts3FTS15read_next_entry17h61830a73507cb09aE
               (undefined4 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  ulong local_28;
  char local_20 [4];
  int local_1c;
  
  lVar1 = (*(code *)PTR_fts_read_001f7070)(*param_2);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    *(undefined *)(param_1 + 1) = 1;
    *param_1 = 0x12;
    return;
  }
  puVar2 = (uint *)(*(code *)PTR___errno_location_001f6e90)();
  uVar3 = (ulong)*puVar2 << 0x20 | 2;
  local_28 = uVar3;
  _ZN3std2io5error14repr_bitpacked11decode_repr17h77be729a8c24f411E(local_20,uVar3);
  if ((local_20[0] == '\0') && (local_1c == 0)) {
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = 0x12;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h2038812c87ccc8f0E(&local_28);
    return;
  }
  *param_1 = 0x10;
  *(char **)(param_1 + 2) = "fts_read()";
  *(undefined8 *)(param_1 + 4) = 10;
  *(ulong *)(param_1 + 6) = uVar3;
  return;
}