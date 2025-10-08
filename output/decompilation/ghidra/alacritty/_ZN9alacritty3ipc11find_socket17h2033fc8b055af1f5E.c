void _ZN9alacritty3ipc11find_socket17h2033fc8b055af1f5E(int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  
  uStack_e8 = *(undefined8 *)(param_2 + 4);
  local_f8 = *param_2;
  uStack_f4 = param_2[1];
  uStack_f0 = param_2[2];
  uStack_ec = param_2[3];
                    /* try { // try from 0055c7d7 to 0055c800 has its CatchHandler @ 0055caa4 */
  _ZN3std2os4unix3net6stream10UnixStream7connect17h5d5356656ab81e48E(&local_78,&local_f8);
  if (local_78 == 1) {
    uVar1 = _ZN9alacritty3ipc11find_socket28__u7b__u7b_closure_u7d__u7d_17h1e62c33cffc915edE
                      (&local_f8,CONCAT44(iStack_6c,iStack_70));
    *(undefined8 *)(param_1 + 2) = uVar1;
    *param_1 = 1;
  }
  else {
    *param_1 = local_78;
    param_1[1] = iStack_74;
    param_1[2] = iStack_70;
    param_1[3] = iStack_6c;
  }
  _ZN4core3mem4drop17ha42964a555fb617bE(&local_f8);
  return;
}