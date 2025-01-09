__int64 __fastcall uu_tail::chunks::BytesChunk::fill(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  result = std::io::impls::<impl std::io::Read for alloc::boxed::Box<R>>::read(a3, a4, a2);
  if ( result )
  {
    result = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v5);
    a1[1] = result;
    a1[2] = v6;
    *a1 = 1LL;
  }
  else
  {
    *(_QWORD *)(a2 + 0x2000) = v5;
    if ( v5 )
    {
      a1[1] = 1LL;
      a1[2] = v5;
      *a1 = 0LL;
    }
    else
    {
      *(_OWORD *)a1 = 0LL;
    }
  }
  return result;
}
