_QWORD *__fastcall uu_tail::chunks::BytesChunk::fill(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  if ( <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a3, a2, 0x2000LL) )
  {
    a1[1] = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v3);
    a1[2] = v4;
    *a1 = 1LL;
  }
  else
  {
    *(_QWORD *)(a2 + 0x2000) = v3;
    if ( v3 )
    {
      a1[1] = 1LL;
      a1[2] = v3;
      *a1 = 0LL;
    }
    else
    {
      *(_OWORD *)a1 = 0LL;
    }
  }
  return a1;
}
