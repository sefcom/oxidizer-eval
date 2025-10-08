__int64 __fastcall zoxide::util::rename(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v4 = <&T as core::convert::AsRef<U>>::as_ref();
  v6 = v5;
  v7 = <&T as core::convert::AsRef<U>>::as_ref(a2, a3);
  v9 = v8;
  v10 = std::fs::rename(v4, v6, v7, v8);
  if ( !v10 )
    goto LABEL_5;
  v11 = v10;
  if ( (unsigned __int8)std::io::error::Error::kind(v10) == 1 )
  {
    v14[0] = v11;
    core::ptr::drop_in_place<std::io::error::Error>(v14);
    v12 = std::fs::rename(v4, v6, v7, v9);
    if ( v12 )
    {
      v11 = v12;
      std::io::error::Error::kind(v12);
      goto LABEL_6;
    }
LABEL_5:
    v11 = 0LL;
  }
LABEL_6:
  v14[0] = v4;
  v14[1] = v6;
  v14[2] = v7;
  v14[3] = v9;
  return ((__int64 (__fastcall *)(__int64, _QWORD *))anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::with_context)(
           v11,
           v14);
}