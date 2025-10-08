_BOOL8 __fastcall uu_dd::make_linux_oflags(unsigned __int8 *a1)
{
  unsigned int v1; // eax
  __int64 v2; // rcx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // edx

  v1 = *a1 << 10;
  v2 = v1 + 0x4000;
  if ( !a1[2] )
    v2 = v1;
  v3 = (unsigned int)&stru_10000 + v2;
  if ( !a1[3] )
    v3 = v2;
  v4 = v3 + 4096;
  if ( !a1[4] )
    v4 = v3;
  v5 = v4 | 0x40000;
  if ( !a1[8] )
    v5 = v4;
  v6 = v5 | 0x100;
  if ( !a1[9] )
    v6 = v5;
  v7 = v6 | 0x20000;
  if ( !a1[10] )
    v7 = v6;
  v8 = v7 | 0x800;
  if ( !a1[7] )
    v8 = v7;
  v9 = v8 | 0x101000;
  if ( !a1[5] )
    v9 = v8;
  return v9 != 0;
}