undefined4 *
_ZN12uu_dircolors20generate_type_output17h04462d82bde79245E(undefined4 *param_1,char *param_2)

{
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  if (*param_2 == '\x02') {
    _ZN4core4iter6traits8iterator8Iterator7collect17h1b19423c6d48f07bE
              (local_40,*(long *)PTR_PTR_001fe298,*(long *)PTR_PTR_001fe298 + 0x360);
                    /* try { // try from 001680f7 to 0016810d has its CatchHandler @ 00168177 */
    _ZN5alloc3str17join_generic_copy17h8b37c6cf08035dd4E
              (&local_28,local_38,local_30,&DAT_0011c11e,1);
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h1107bfbe1ce66062E
              (local_40,*(long *)PTR_PTR_001fe298,*(long *)PTR_PTR_001fe298 + 0x360);
                    /* try { // try from 00168138 to 0016814e has its CatchHandler @ 00168175 */
    _ZN5alloc3str17join_generic_copy17h8b37c6cf08035dd4E
              (&local_28,local_38,local_30,&DAT_0011c11f,1);
  }
  *(undefined8 *)(param_1 + 4) = local_18;
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17hbd7984742b77bb31E
            (local_40);
  return param_1;
}