/* состояние программы, T13.788-T13.841; $DVS:time$ */

//#ifdef __cplusplus
//extern "C" {
//#endif

xdag_state(INIT, "Initializing.")
xdag_state(KEYS, "Generating keys...")
xdag_state(REST, "The local storage is corrupted. Resetting blocks engine.")
xdag_state(LOAD, "Loading blocks from the local storage.")
xdag_state(STOP, "Blocks loaded. Waiting for 'run' command.")
xdag_state(WTST, "Trying to connect to the test network.")
xdag_state(WAIT, "Trying to connect to the main network.")
xdag_state(TTST, "Trying to connect to the testnet pool.")
xdag_state(TRYP, "Trying to connect to the mainnet pool.")
xdag_state(CTST, "Connected to the test network. Synchronizing.")
xdag_state(CONN, "Connected to the main network. Synchronizing.")
xdag_state(XFER, "Waiting for transfer to complete.")
xdag_state(PTST, "Connected to the testnet pool. No mining.")
xdag_state(POOL, "Connected to the mainnet pool. No mining.")
xdag_state(MTST, "Connected to the testnet pool. Mining on. Normal testing.")
xdag_state(MINE, "Connected to the mainnet pool. Mining on. Normal operation.")
xdag_state(STST, "Synchronized with the test network. Normal testing.")
xdag_state(SYNC, "Synchronized with the main network. Normal operation.")

//#ifdef __cplusplus
//}
//#endif
