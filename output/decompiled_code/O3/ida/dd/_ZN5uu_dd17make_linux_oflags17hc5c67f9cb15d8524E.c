_BOOL8 __fastcall uu_dd::make_linux_oflags(unsigned __int8 *a1)
{
  int v1; // ecx
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // edx

  v1 = (*a1 << 10) | 0x4000;
  if ( !a1[2] )
    v1 = *a1 << 10;
  v2 = v1 | 0x10000;
  if ( !a1[3] )
    v2 = v1;
  v3 = v2 | 0x1000;
  if ( !a1[4] )
    v3 = v2;
  v4 = v3 | 0x40000;
  if ( !a1[8] )
    v4 = v3;
  v5 = v4 | 0x100;
  if ( !a1[9] )
    v5 = v4;
  v6 = v5 | 0x20000;
  if ( !a1[10] )
    v6 = v5;
  v7 = v6 | 0x800;
  if ( !a1[7] )
    v7 = v6;
  v8 = v7 | 0x101000;
  if ( !a1[5] )
    v8 = v7;
  return v8 != 0;
}
