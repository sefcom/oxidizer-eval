// attributes: thunk
volatile signed __int64 *__fastcall linera_exporter::storage::ExporterStorage<S>::load_destination_state(
        __int64 a1,
        __int64 a2)
{
  return linera_exporter::state::DestinationStates::load_state(a1, a2);
}