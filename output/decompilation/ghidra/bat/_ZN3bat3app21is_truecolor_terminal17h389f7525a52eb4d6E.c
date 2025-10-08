ulong _ZN3bat3app21is_truecolor_terminal17h389f7525a52eb4d6E(void)

{
  ulong uVar1;
  byte local_20 [8];
  long local_18;
  ulong local_10;
  
  _ZN3std3env3var17h735fd0f3b352739aE(local_20,&DAT_0018504c,9);
  if ((local_20[0] & 1) != 0) {
    if (local_18 != -0x7fffffffffffffff) {
      _ZN4core3ptr74drop_in_place_LT_core__result__Result_LT_bool_C_std__env__VarError_GT__GT_17h2fc2b94ea14a5e75E
                (local_18,local_10);
      local_10 = 0;
    }
    return local_10 & 0xffffffffffffff01;
  }
  uVar1 = _ZN3bat3app21is_truecolor_terminal28__u7b__u7b_closure_u7d__u7d_17h75a78177ec293655E
                    (&local_18);
  return uVar1 & 0xffffffffffffff01;
}