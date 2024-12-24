void __rustcall uu_tail::unbounded_tail(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined local_2090 [64];
  undefined8 local_2050 [4];
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_2050[0] = std::io::stdio::stdout();
  uVar1 = std::io::stdio::Stderr::lock(local_2050);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_2090,0x2000,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0021414b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0012a86c + *(int *)(&DAT_0012a86c + *param_2 * 4)))();
  return;
}