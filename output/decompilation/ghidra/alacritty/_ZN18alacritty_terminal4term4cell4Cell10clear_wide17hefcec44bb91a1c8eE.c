void _ZN18alacritty_terminal4term4cell4Cell10clear_wide17hefcec44bb91a1c8eE(long *param_1)

{
  undefined8 *puVar1;
  
  *(byte *)((long)param_1 + 0x14) = *(byte *)((long)param_1 + 0x14) & 0xdf;
  if (*param_1 != 0) {
                    /* try { // try from 006bdb51 to 006bdb58 has its CatchHandler @ 006bdb8e */
    puVar1 = (undefined8 *)_ZN5alloc4sync16Arc_LT_T_C_A_GT_8make_mut17hd1b9ba4e0192b0c5E(param_1);
    _ZN4core3ptr48drop_in_place_LT_alloc__vec__Vec_LT_char_GT__GT_17he96c0fdde40bc7e1E
              (*puVar1,puVar1[1]);
    *puVar1 = 0;
    puVar1[1] = 4;
    puVar1[2] = 0;
  }
  *(undefined4 *)(param_1 + 2) = 0x20;
  return;
}