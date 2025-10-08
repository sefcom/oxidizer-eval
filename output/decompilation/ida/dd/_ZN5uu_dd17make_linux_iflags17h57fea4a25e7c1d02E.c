_BOOL8 __fastcall uu_dd::make_linux_iflags(unsigned __int8 *a1)
{
  unsigned int v1; // ecx
  __int64 v2; // rax
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edx

  v1 = (unsigned int)&stru_10000 + 0x4000 * a1[1];
  if ( !a1[2] )
    v1 = a1[1] << 14;
  v2 = v1 + 4096;
  if ( !a1[3] )
    v2 = v1;
  v3 = (unsigned int)&unk_40000 + v2;
  if ( !a1[7] )
    v3 = v2;
  v4 = v3 | 0x100;
  if ( !a1[8] )
    v4 = v3;
  v5 = v4 | 0x20000;
  if ( !a1[9] )
    v5 = v4;
  v6 = v5 | 0x800;
  if ( !a1[6] )
    v6 = v5;
  v7 = v6 | 0x101000;
  if ( !a1[4] )
    v7 = v6;
  return v7 != 0;
}