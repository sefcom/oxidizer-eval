__int64 __fastcall uu_dd::Output::new_file::open_dst(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        unsigned __int8 *a6)
{
  int v7; // edx
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  int v10; // [rsp+8h] [rbp-20h]
  char v11; // [rsp+Ch] [rbp-1Ch]
  char v12; // [rsp+Dh] [rbp-1Bh]

  v9 = 0x1B600000000LL;
  v10 = 256;
  v11 = a5 ^ 1;
  v12 = a4;
  BYTE2(v10) = *a6;
  if ( uu_dd::make_linux_oflags(a6) )
    LODWORD(v9) = v7;
  return std::fs::OpenOptions::open(a1, &v9, a2, a3);
}
