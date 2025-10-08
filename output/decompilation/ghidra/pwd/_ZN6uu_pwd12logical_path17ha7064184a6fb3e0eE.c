undefined8 * _ZN6uu_pwd12logical_path17ha7064184a6fb3e0eE(undefined8 *param_1)

{
  char cVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  _ZN3std3env6var_os17h2cbff6dce8585d27E(&local_38);
                    /* try { // try from 001511de to 00151202 has its CatchHandler @ 00151225 */
  cVar1 = _ZN6uu_pwd12logical_path16looks_reasonable17h9259bfbf6c23b9afE(local_30,local_28);
  if (cVar1 == '\0') {
    (*(code *)PTR__ZN3std3env11current_dir17h2d02f56ea8ff76ebE_001deb60)(param_1);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h51e967da23fdefa9E(local_38,local_30);
  }
  else {
    *param_1 = local_38;
    param_1[1] = local_30;
    param_1[2] = local_28;
  }
  return param_1;
}