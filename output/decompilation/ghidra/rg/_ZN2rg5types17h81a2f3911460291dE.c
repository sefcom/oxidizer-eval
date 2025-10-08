void _ZN2rg5types17h81a2f3911460291dE(undefined *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  int local_7c;
  undefined local_70 [64];
  
  _ZN2rg5flags6hiargs6HiArgs6stdout17h4f38f4c31b97dea6E(local_70);
  lVar1 = *(long *)(param_2 + 0x1f8);
  lVar2 = *(long *)(param_2 + 0x200);
  local_7c = 0;
  lVar9 = lVar1;
  do {
    if (lVar9 == lVar2 * 0x30 + lVar1) {
      param_1[1] = local_7c == 0;
      uVar6 = 0;
      goto LAB_0035c117;
    }
                    /* try { // try from 0035c02d to 0035c051 has its CatchHandler @ 0035c148 */
    lVar7 = _ZN3std2io5Write9write_all17hf6e6bfa0b725a577E
                      (local_70,*(undefined8 *)(lVar9 + 8),*(undefined8 *)(lVar9 + 0x10));
    if ((lVar7 != 0) ||
       (lVar7 = _ZN3std2io5Write9write_all17hf6e6bfa0b725a577E(local_70,": ",2), lVar7 != 0)) break;
    lVar3 = *(long *)(lVar9 + 0x28);
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar9 + 0x20);
                    /* try { // try from 0035c079 to 0035c080 has its CatchHandler @ 0035c146 */
      lVar7 = _ZN3std2io5Write9write_all17hf6e6bfa0b725a577E
                        (local_70,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
      if (lVar7 != 0) break;
      lVar5 = lVar4;
      while (lVar5 + 0x18 != lVar4 + lVar3 * 0x18) {
                    /* try { // try from 0035c0ad to 0035c0d5 has its CatchHandler @ 0035c14a */
        lVar7 = _ZN3std2io5Write9write_all17hf6e6bfa0b725a577E(local_70,", ",2);
        if ((lVar7 != 0) ||
           (lVar7 = _ZN3std2io5Write9write_all17hf6e6bfa0b725a577E
                              (local_70,*(undefined8 *)(lVar5 + 0x20),*(undefined8 *)(lVar5 + 0x28))
           , lVar5 = lVar5 + 0x18, lVar7 != 0)) goto LAB_0035c104;
      }
    }
                    /* try { // try from 0035c0e0 to 0035c0f3 has its CatchHandler @ 0035c148 */
    lVar7 = _ZN3std2io5Write9write_all17hf6e6bfa0b725a577E(local_70,"\n",1);
    local_7c = local_7c + 1;
    lVar9 = lVar9 + 0x30;
  } while (lVar7 == 0);
LAB_0035c104:
                    /* try { // try from 0035c104 to 0035c10b has its CatchHandler @ 0035c144 */
  uVar8 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h93265d5384100ee9E
                    (lVar7);
  *(undefined8 *)(param_1 + 8) = uVar8;
  uVar6 = 1;
LAB_0035c117:
  *param_1 = uVar6;
  _ZN4core3ptr50drop_in_place_LT_grep_cli__wtr__StandardStream_GT_17h44e23c898ea41b40E(local_70);
  return;
}