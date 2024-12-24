void __rustcall
uu_split::platform::unix::paths_refer_to_same_file
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined local_150 [152];
  undefined8 local_b8 [19];
  
  cVar1 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(param_1,param_2,&DAT_00122207,1);
  if (cVar1 == '\0') {
    uucore::features::fs::FileInformation::from_path(local_150,param_1,param_2,1);
  }
  else {
    local_b8[0] = std::io::stdio::stdin();
    uucore::features::fs::FileInformation::from_file(local_150,local_b8);
  }
                    /* try { // try from 001d6316 to 001d632d has its CatchHandler @ 001d6350 */
  uucore::features::fs::FileInformation::from_path(local_b8,param_3,param_4,1);
  uucore::features::fs::infos_refer_to_same_file(local_150,local_b8);
  return;
}