__int64 __fastcall alacritty::config::color::_::<impl serde::ser::Serialize for alacritty::config::color::Colors>::serialize(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // [rsp+8h] [rbp-20h] BYREF
  unsigned int v4; // [rsp+10h] [rbp-18h]

  <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(&v3, a2, 14LL);
  result = (__int64)v3;
  if ( (_BYTE)v4 != 3 )
  {
    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 144);
    if ( !result )
    {
      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                 &v3,
                 "cursorfatal runtime error: thread local panicked on drop, aborting\n"
                 "newtype variant/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/x11rb-0.13.1/src/rus"
                 "t_connection/mod.rsassertion failed: !inner.inner.prepare_check_for_reply_or_error(sequence)internal er"
                 "ror: entered unreachable code: We just prefetched this/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets"
                 "/src/alacritty/alacritty_terminal/src/grid/mod.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/librar"
                 "y/alloc/src/collections/btree/navigate.rsXErrorInvalidUtf8ullrue/home/34r7hm4n/.cargo/registry/src/inde"
                 "x.crates.io-1949cf8c6b5b557f/serde_json-1.0.140/src/de.rs/home/34r7hm4n/.cargo/registry/src/index.crate"
                 "s.io-1949cf8c6b5b557f/serde_json-1.0.140/src/ser.rs}\"false[{,\\\"\\\\\\/\\b\\f\\n\\r\\t:]did not find "
                 "expected hexadecimal number",
                 6LL,
                 a1 + 40);
      if ( !result )
      {
        result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                   &v3,
                   aViModeCursor,
                   14LL,
                   a1 + 48);
        if ( !result )
        {
          result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                     &v3,
                     aSelection_0,
                     9LL,
                     a1 + 56);
          if ( !result )
          {
            result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 96);
            if ( !result )
            {
              result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 120);
              if ( !result )
              {
                result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v3, a1 + 158);
                if ( !result )
                {
                  result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                             &v3,
                             *(_QWORD *)(a1 + 8),
                             *(_QWORD *)(a1 + 16));
                  if ( !result )
                  {
                    result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                               &v3,
                               a1 + 64);
                    if ( !result )
                    {
                      result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                 &v3,
                                 a1 + 24);
                      if ( !result )
                      {
                        result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                   &v3,
                                   a1 + 80);
                        if ( !result )
                        {
                          <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                            &v3,
                            aTransparentBac,
                            29LL,
                            *(unsigned __int8 *)(a1 + 183));
                          <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                            &v3,
                            aDrawBoldTextWi,
                            33LL,
                            *(unsigned int *)(a1 + 184));
                          result = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(
                                     &v3,
                                     a1 + 32);
                          if ( !result )
                          {
                            <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(*v3, v4);
                            return 0LL;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}