__int64 __fastcall uu_split::filenames::FilenameIterator::new(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rcx
  unsigned __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rdi
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v7 = *(unsigned __int8 *)(a4 + 41);
  LOBYTE(v7) = 8 * v7;
  v9 = 0x8000000000000000LL;
  if ( (*(_BYTE *)(a4 + 40) & 1) != 0 )
  {
    v11 = *(_QWORD *)(a4 + 32);
    v12 = ((unsigned __int64)&loc_100A1A >> v7) & 0x1A;
  }
  else
  {
    uu_split::number::FixedWidthNumber::new(
      (__int64)v16,
      (unsigned __int64)&loc_100A1A >> v7,
      *(_QWORD *)(a4 + 24),
      *(_QWORD *)(a4 + 32));
    if ( v16[0] == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 8) = uucore::mods::error::USimpleError::new(
                              1LL,
                              anon_f1287c7fdd0bdb771238559a83dec725_50_llvm_9029318952859596258,
                              63LL);
      *(_QWORD *)(a1 + 16) = v10;
      *(_QWORD *)a1 = 0x8000000000000001LL;
      return a1;
    }
    v11 = v16[1];
    v12 = v16[2];
    v7 = v16[3];
    v9 = v16[0];
  }
  v13 = *(_QWORD *)(a4 + 8);
  if ( !v13 || (v14 = *(_QWORD *)(a4 + 16), v14 < 0) )
    core::panicking::panic_nounwind(anon_a1369f34f0af36e085eaa2e09186d83a_17_llvm_8562216672536282045, 162LL);
  *(_QWORD *)a1 = v9;
  *(_QWORD *)(a1 + 8) = v11;
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 24) = v7;
  *(_QWORD *)(a1 + 32) = a2;
  *(_QWORD *)(a1 + 40) = a3;
  *(_QWORD *)(a1 + 48) = v13;
  *(_QWORD *)(a1 + 56) = v14;
  *(_BYTE *)(a1 + 64) = 1;
  return a1;
}
