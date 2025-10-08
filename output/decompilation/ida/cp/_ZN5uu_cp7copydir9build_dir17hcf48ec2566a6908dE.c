__int64 __fastcall uu_cp::copydir::build_dir(_QWORD *a1, __int64 a2, char a3, char a4, char a5, __int64 a6)
{
  unsigned __int8 v6; // r8
  __int64 v7; // rdx
  int v8; // ebp
  __int64 result; // rax
  __int16 umask; // ax
  int v11; // [rsp+0h] [rbp-D8h] BYREF
  char v12; // [rsp+4h] [rbp-D4h]
  int dest; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+10h] [rbp-C8h]
  int v15; // [rsp+40h] [rbp-98h]

  v12 = a3;
  v6 = a5 & 1;
  v7 = 18LL;
  if ( !v6 )
    v7 = 0LL;
  v8 = 63;
  if ( (a4 & 1) == 0 )
    v8 = v7;
  if ( (v6 & (a6 != 0)) == 1 )
  {
    std::fs::symlink_metadata(&dest);
    if ( dest == 2 )
    {
      result = v14;
LABEL_11:
      *a1 = 0x8000000000000001LL;
      a1[1] = result;
      return result;
    }
    umask = ~(_WORD)v15;
  }
  else
  {
    umask = uucore::features::mode::get_umask(a1, a2, v7);
  }
  v11 = (v8 | umask & 0x1FF) ^ 0x1FF;
  result = std::fs::DirBuilder::create(&v11, a2);
  if ( result )
    goto LABEL_11;
  *a1 = 0x800000000000000CLL;
  return result;
}