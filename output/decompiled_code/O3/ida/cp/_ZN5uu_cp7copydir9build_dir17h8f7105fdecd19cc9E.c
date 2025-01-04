__int64 __fastcall uu_cp::copydir::build_dir(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v6; // rcx
  int v7; // ebp
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // [rsp+8h] [rbp-20h] BYREF
  char v11; // [rsp+Ch] [rbp-1Ch]

  v11 = a5;
  v6 = 18LL;
  if ( !(_BYTE)a3 )
    v6 = 0LL;
  v7 = 63;
  if ( !(_BYTE)a2 )
    v7 = v6;
  v10 = (v7 | uucore::features::mode::get_umask(a1, a2, a3, v6) & 0x1FF) ^ 0x1FF;
  v8 = std::fs::DirBuilder::create(&v10, a4);
  if ( v8 )
  {
    a1[1] = v8;
    result = 2LL;
  }
  else
  {
    result = 13LL;
  }
  *a1 = result;
  return result;
}
