ulong __rustcall uu_dircolors::guess_syntax(void)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  undefined8 unaff_RBP;
  ulong uVar4;
  undefined auVar6 [16];
  long local_38 [2];
  undefined8 local_28;
  long local_20;
  undefined7 uVar5;
  
  std::env::var(local_38,&DAT_001233b1,5);
  uVar5 = (undefined7)((ulong)unaff_RBP >> 8);
  uVar4 = CONCAT71(uVar5,3);
  if ((local_38[0] == 0) && (local_20 != 0)) {
                    /* try { // try from 001bbb78 to 001bbbbd has its CatchHandler @ 001bbbc6 */
    auVar6 = std::path::Path::file_name(local_28);
    lVar3 = auVar6._0_8_;
    if (lVar3 == 0) {
      uVar4 = 0;
    }
    else {
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (lVar3,auVar6._8_8_,&DAT_001233b6,3);
      uVar4 = CONCAT71(uVar5,1);
      if (cVar1 == '\0') {
        uVar2 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                          (lVar3,auVar6._8_8_,&DAT_00116e38,4);
        uVar4 = (ulong)uVar2;
      }
    }
  }
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(local_38)
  ;
  return uVar4 & 0xffffffff;
}