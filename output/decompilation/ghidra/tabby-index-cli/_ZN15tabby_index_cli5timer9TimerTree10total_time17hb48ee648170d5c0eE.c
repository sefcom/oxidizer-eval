undefined8
_ZN15tabby_index_cli5timer9TimerTree10total_time17hb48ee648170d5c0eE(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    return *(undefined8 *)(param_1 + -0x10 + param_2 * 0x20);
  }
  (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_006df548)
            (&PTR_s_crates_tabby_index_cli_src_timer_00684e60);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}