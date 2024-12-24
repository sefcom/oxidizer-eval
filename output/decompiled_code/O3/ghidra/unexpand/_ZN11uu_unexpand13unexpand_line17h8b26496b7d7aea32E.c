/* WARNING: Removing unreachable block (ram,0x001b3d7c) */
/* WARNING: Removing unreachable block (ram,0x001b3dcb) */
/* WARNING: Removing unreachable block (ram,0x001b3e75) */
/* WARNING: Removing unreachable block (ram,0x001b3e9b) */
/* WARNING: Removing unreachable block (ram,0x001b3de3) */
/* WARNING: Removing unreachable block (ram,0x001b3ea0) */
/* WARNING: Removing unreachable block (ram,0x001b3f0f) */
/* WARNING: Removing unreachable block (ram,0x001b3f08) */
/* WARNING: Removing unreachable block (ram,0x001b3f12) */
/* WARNING: Removing unreachable block (ram,0x001b3f3f) */
/* WARNING: Removing unreachable block (ram,0x001b3f4e) */
/* WARNING: Removing unreachable block (ram,0x001b4010) */
/* WARNING: Removing unreachable block (ram,0x001b3f72) */
/* WARNING: Removing unreachable block (ram,0x001b3fb0) */
/* WARNING: Removing unreachable block (ram,0x001b3fca) */
/* WARNING: Removing unreachable block (ram,0x001b3fcf) */
/* WARNING: Removing unreachable block (ram,0x001b40d0) */
/* WARNING: Removing unreachable block (ram,0x001b40e5) */
/* WARNING: Removing unreachable block (ram,0x001b3fd8) */
/* WARNING: Removing unreachable block (ram,0x001b4008) */
/* WARNING: Removing unreachable block (ram,0x001b40f8) */
/* WARNING: Removing unreachable block (ram,0x001b4143) */

long __rustcall
uu_unexpand::unexpand_line
          (long param_1,undefined8 param_2,undefined8 param_3,char param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined local_48 [8];
  byte local_40;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    next_char_info(local_48,param_4 != '\0',*(undefined8 *)(param_1 + 8),*(long *)(param_1 + 0x10),0
                  );
                    /* WARNING: Could not recover jumptable at 0x001b3be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (*(code *)(&DAT_0011d4ec + *(int *)(&DAT_0011d4ec + (ulong)local_40 * 4)))();
    return lVar1;
  }
  write_tabs(param_2,param_6,param_7,0,0,0,1,1);
  lVar1 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::flush(param_2);
  if (lVar1 == 0) {
    ::alloc::vec::Vec<T,A>::truncate(param_1,0);
    lVar1 = 0;
  }
  return lVar1;
}