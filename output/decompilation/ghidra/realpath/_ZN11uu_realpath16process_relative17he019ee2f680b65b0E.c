void _ZN11uu_realpath16process_relative17he019ee2f680b65b0E
               (undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,long param_5
               ,undefined8 param_6)

{
  undefined8 uVar1;
  char cVar2;
  
  if (param_3 == 0) {
    if (param_5 == 0) goto LAB_00162ee2;
  }
  else {
                    /* try { // try from 00162e97 to 00162ea2 has its CatchHandler @ 00162f00 */
    cVar2 = _ZN3std4path4Path11starts_with17h5d2b2bc7a5c06590E(param_2[1],param_2[2]);
    if (cVar2 == '\0') {
LAB_00162ee2:
      param_1[2] = param_2[2];
      uVar1 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      return;
    }
    if (param_5 == 0) {
      param_5 = param_3;
      param_6 = param_4;
    }
  }
  _ZN6uucore8features2fs21make_path_relative_to17h06a9f1b021e83a4dE(param_1,param_2,param_5,param_6)
  ;
  return;
}