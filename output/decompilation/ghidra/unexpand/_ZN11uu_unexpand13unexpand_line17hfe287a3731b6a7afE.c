/* WARNING: Removing unreachable block (ram,0x001b2e1c) */
/* WARNING: Removing unreachable block (ram,0x001b2e6b) */
/* WARNING: Removing unreachable block (ram,0x001b2f15) */
/* WARNING: Removing unreachable block (ram,0x001b2f3b) */
/* WARNING: Removing unreachable block (ram,0x001b2e83) */
/* WARNING: Removing unreachable block (ram,0x001b2f40) */
/* WARNING: Removing unreachable block (ram,0x001b2faf) */
/* WARNING: Removing unreachable block (ram,0x001b2fa8) */
/* WARNING: Removing unreachable block (ram,0x001b2fb2) */
/* WARNING: Removing unreachable block (ram,0x001b2fdf) */
/* WARNING: Removing unreachable block (ram,0x001b2fee) */
/* WARNING: Removing unreachable block (ram,0x001b30b0) */
/* WARNING: Removing unreachable block (ram,0x001b3012) */
/* WARNING: Removing unreachable block (ram,0x001b3050) */
/* WARNING: Removing unreachable block (ram,0x001b306a) */
/* WARNING: Removing unreachable block (ram,0x001b306f) */
/* WARNING: Removing unreachable block (ram,0x001b3170) */
/* WARNING: Removing unreachable block (ram,0x001b3185) */
/* WARNING: Removing unreachable block (ram,0x001b3078) */
/* WARNING: Removing unreachable block (ram,0x001b30a8) */
/* WARNING: Removing unreachable block (ram,0x001b3198) */
/* WARNING: Removing unreachable block (ram,0x001b31e3) */

long _ZN11uu_unexpand13unexpand_line17hfe287a3731b6a7afE
               (long param_1,undefined8 param_2,undefined8 param_3,char param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined local_48 [8];
  byte local_40;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _ZN11uu_unexpand14next_char_info17hda448420cf4eb947E
              (local_48,param_4 != '\0',*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x10),0);
                    /* WARNING: Could not recover jumptable at 0x001b2c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (*(code *)(&DAT_0011d1f4 + *(int *)(&DAT_0011d1f4 + (ulong)local_40 * 4)))();
    return lVar1;
  }
  _ZN11uu_unexpand10write_tabs17h8e9e933eb88f89cfE(param_2,param_6,param_7,0,0,0,1,1);
  lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h0afaa565343b58bdE
                    (param_2);
  if (lVar1 == 0) {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_8truncate17h60643c48044eaa26E(param_1,0);
    lVar1 = 0;
  }
  return lVar1;
}