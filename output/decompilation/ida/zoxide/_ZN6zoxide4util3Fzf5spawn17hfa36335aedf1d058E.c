__int64 __fastcall zoxide::util::Fzf::spawn(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int128 v3; // xmm0
  _QWORD v4[4]; // [rsp+8h] [rbp-50h] BYREF
  int v5; // [rsp+28h] [rbp-30h] BYREF
  _BYTE v6[28]; // [rsp+2Ch] [rbp-2Ch]

  result = std::process::Command::spawn(&v5);
  if ( v5 == 1 )
  {
    v2 = *(_QWORD *)&v6[4];
    if ( (unsigned __int8)std::io::error::Error::kind(*(_QWORD *)&v6[4]) )
    {
      v4[1] = v2;
      LODWORD(v4[0]) = 1;
      return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(a1, v4);
    }
    else
    {
      v4[0] = v2;
      *(_QWORD *)(a1 + 8) = anyhow::kind::Adhoc::new();
      *(_DWORD *)a1 = 1;
      return core::ptr::drop_in_place<std::io::error::Error>(v4);
    }
  }
  else
  {
    v3 = *(_OWORD *)v6;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v6[12];
    *(_OWORD *)(a1 + 4) = v3;
    *(_DWORD *)a1 = 0;
  }
  return result;
}