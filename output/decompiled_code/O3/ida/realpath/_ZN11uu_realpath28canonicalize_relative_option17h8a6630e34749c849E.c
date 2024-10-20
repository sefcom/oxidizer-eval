        unsigned __int8 a4)
{
  unsigned __int64 v4; // r12
  unsigned __int64 *v5; // rbx
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 v9; // rdx
  volatile signed __int64 *v10; // rbp
  volatile signed __int64 *v11; // [rsp+8h] [rbp-70h]
  volatile signed __int64 *v12; // [rsp+10h] [rbp-68h]
  volatile signed __int64 *v13; // [rsp+18h] [rbp-60h] BYREF
  volatile signed __int64 *v14; // [rsp+20h] [rbp-58h]
  unsigned __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  volatile signed __int64 *v17; // [rsp+38h] [rbp-40h] BYREF
  bool v18; // [rsp+40h] [rbp-38h]

  v5 = (unsigned __int64 *)a1;
  v6 = 0x8000000000000000LL;
  v7 = *a2;
  if ( *a2 == 0x8000000000000000LL )
    goto LABEL_18;
  v9 = a2[2];
  v16 = a2[1];
  uucore::features::fs::canonicalize(&v13, v16, v9, a3, a4);
  a1 = v14;
  v12 = v13;
  if ( v13 != (volatile signed __int64 *)0x8000000000000000LL )
  {
    v4 = v15;
    if ( a3 == 1 )
    {
      v11 = v14;
      if ( !(unsigned __int8)std::path::Path::is_dir(v14, v15) )
      {
        std::sys::pal::unix::fs::readdir(&v13, v11, v4);
        v10 = v13;
        if ( (_BYTE)v14 == 2 )
        {
          if ( v12 )
            _rust_dealloc(v11, v12, 1LL);
          a1 = v10;
          goto LABEL_3;
        }
        v17 = v13;
        v18 = (_BYTE)v14 != 0;
        if ( !_InterlockedDecrement64(v13) )
          alloc::sync::Arc<T,A>::drop_slow(&v17);
        v7 = *a2;
      }
      a1 = v11;
    }
    if ( v7 )
      _rust_dealloc(a2[1], v7, 1LL);
    v6 = (unsigned __int64)v12;
LABEL_18:
    *v5 = v6;
    v5[1] = (unsigned __int64)a1;
    v5[2] = v4;
    return;
  }
LABEL_3:
  v5[1] = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(
            a1,
            a2);
  v5[2] = (unsigned __int64)&anon_74f624fe0f3003fa77e35a7822b62d30_8_llvm_17351024934342531244;
  *v5 = 0x8000000000000001LL;
  if ( v7 )
    _rust_dealloc(v16, v7, 1LL);
}
