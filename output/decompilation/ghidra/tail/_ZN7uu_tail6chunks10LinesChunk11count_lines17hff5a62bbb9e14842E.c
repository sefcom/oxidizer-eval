void _ZN7uu_tail6chunks10LinesChunk11count_lines17hff5a62bbb9e14842E(long param_1)

{
  undefined uVar1;
  undefined auVar2 [16];
  undefined local_10 [8];
  
  uVar1 = *(undefined *)(param_1 + 0x2010);
  auVar2 = _ZN7uu_tail6chunks10LinesChunk10get_buffer17h4eee912e7ef2e0dbE();
  local_10[0] = uVar1;
  _ZN6memchr4arch7generic6memchr4Iter5count17h043089570cb60419E
            (auVar2._0_8_,auVar2._8_8_ + auVar2._0_8_,local_10);
  return;
}