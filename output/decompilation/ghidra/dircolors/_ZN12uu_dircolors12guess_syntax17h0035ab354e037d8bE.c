ulong __rustcall uu_dircolors::guess_syntax(void)

{
  char cVar1;
  long lVar2;
  undefined8 unaff_RBX;
  ulong uVar3;
  undefined auVar4 [16];
  long local_30 [2];
  undefined8 local_20;
  long local_18;
  
  std::env::var(local_30,&DAT_001232b9,5);
  uVar3 = CONCAT71((int7)((ulong)unaff_RBX >> 8),3);
  if ((local_30[0] != 0) || (local_18 == 0)) goto LAB_001bba67;
                    /* try { // try from 001bba8a to 001bbacc has its CatchHandler @ 001bbad9 */
  auVar4 = std::path::Path::file_name(local_20);
  lVar2 = auVar4._0_8_;
  if (lVar2 == 0) {
LAB_001bbad5:
    uVar3 = 0;
  }
  else {
    cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar2,auVar4._8_8_,&DAT_001232be,3);
    if (cVar1 == '\0') {
      cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal
                        (lVar2,auVar4._8_8_,&DAT_00116d78,4);
      if (cVar1 == '\0') goto LAB_001bbad5;
    }
    uVar3 = CONCAT71(auVar4._1_7_,1);
  }
LAB_001bba67:
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(local_30)
  ;
  return uVar3 & 0xffffffff;
}