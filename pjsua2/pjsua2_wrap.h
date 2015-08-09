/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.7
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_pjsua2_WRAP_H_
#define SWIG_pjsua2_WRAP_H_

class SwigDirector_Buddy : public pj::Buddy, public Swig::Director {

public:
    SwigDirector_Buddy();
    virtual ~SwigDirector_Buddy();
    virtual void onBuddyState();

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)();
    void swig_connect_director(SWIG_Callback0_t callbackonBuddyState);

private:
    SWIG_Callback0_t swig_callbackonBuddyState;
    void swig_init_callbacks();
};

class SwigDirector_FindBuddyMatch : public pj::FindBuddyMatch, public Swig::Director {

public:
    SwigDirector_FindBuddyMatch();
    virtual bool match(pj::string const &token, pj::Buddy const &buddy);
    virtual ~SwigDirector_FindBuddyMatch();

    typedef unsigned int (SWIGSTDCALL* SWIG_Callback0_t)(char *, void *);
    void swig_connect_director(SWIG_Callback0_t callbackmatch);

private:
    SWIG_Callback0_t swig_callbackmatch;
    void swig_init_callbacks();
};

class SwigDirector_Account : public pj::Account, public Swig::Director {

public:
    SwigDirector_Account();
    virtual ~SwigDirector_Account();
    virtual void onIncomingCall(pj::OnIncomingCallParam &prm);
    virtual void onRegStarted(pj::OnRegStartedParam &prm);
    virtual void onRegState(pj::OnRegStateParam &prm);
    virtual void onIncomingSubscribe(pj::OnIncomingSubscribeParam &prm);
    virtual void onInstantMessage(pj::OnInstantMessageParam &prm);
    virtual void onInstantMessageStatus(pj::OnInstantMessageStatusParam &prm);
    virtual void onTypingIndication(pj::OnTypingIndicationParam &prm);
    virtual void onMwiInfo(pj::OnMwiInfoParam &prm);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback6_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback7_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackonIncomingCall, SWIG_Callback1_t callbackonRegStarted, SWIG_Callback2_t callbackonRegState, SWIG_Callback3_t callbackonIncomingSubscribe, SWIG_Callback4_t callbackonInstantMessage, SWIG_Callback5_t callbackonInstantMessageStatus, SWIG_Callback6_t callbackonTypingIndication, SWIG_Callback7_t callbackonMwiInfo);

private:
    SWIG_Callback0_t swig_callbackonIncomingCall;
    SWIG_Callback1_t swig_callbackonRegStarted;
    SWIG_Callback2_t swig_callbackonRegState;
    SWIG_Callback3_t swig_callbackonIncomingSubscribe;
    SWIG_Callback4_t swig_callbackonInstantMessage;
    SWIG_Callback5_t swig_callbackonInstantMessageStatus;
    SWIG_Callback6_t swig_callbackonTypingIndication;
    SWIG_Callback7_t swig_callbackonMwiInfo;
    void swig_init_callbacks();
};

class SwigDirector_Call : public pj::Call, public Swig::Director {

public:
    SwigDirector_Call(pj::Account &acc, int call_id = PJSUA_INVALID_ID);
    virtual ~SwigDirector_Call();
    virtual void onCallState(pj::OnCallStateParam &prm);
    virtual void onCallTsxState(pj::OnCallTsxStateParam &prm);
    virtual void onCallMediaState(pj::OnCallMediaStateParam &prm);
    virtual void onCallSdpCreated(pj::OnCallSdpCreatedParam &prm);
    virtual void onStreamCreated(pj::OnStreamCreatedParam &prm);
    virtual void onStreamDestroyed(pj::OnStreamDestroyedParam &prm);
    virtual void onDtmfDigit(pj::OnDtmfDigitParam &prm);
    virtual void onCallTransferRequest(pj::OnCallTransferRequestParam &prm);
    virtual void onCallTransferStatus(pj::OnCallTransferStatusParam &prm);
    virtual void onCallReplaceRequest(pj::OnCallReplaceRequestParam &prm);
    virtual void onCallReplaced(pj::OnCallReplacedParam &prm);
    virtual void onCallRxOffer(pj::OnCallRxOfferParam &prm);
    virtual void onInstantMessage(pj::OnInstantMessageParam &prm);
    virtual void onInstantMessageStatus(pj::OnInstantMessageStatusParam &prm);
    virtual void onTypingIndication(pj::OnTypingIndicationParam &prm);
    virtual pjsip_redirect_op onCallRedirected(pj::OnCallRedirectedParam &prm);
    virtual void onCallMediaTransportState(pj::OnCallMediaTransportStateParam &prm);
    virtual void onCallMediaEvent(pj::OnCallMediaEventParam &prm);
    virtual void onCreateMediaTransport(pj::OnCreateMediaTransportParam &prm);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback5_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback6_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback7_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback8_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback9_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback10_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback11_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback12_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback13_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback14_t)(void *);
    typedef int (SWIGSTDCALL* SWIG_Callback15_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback16_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback17_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback18_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackonCallState, SWIG_Callback1_t callbackonCallTsxState, SWIG_Callback2_t callbackonCallMediaState, SWIG_Callback3_t callbackonCallSdpCreated, SWIG_Callback4_t callbackonStreamCreated, SWIG_Callback5_t callbackonStreamDestroyed, SWIG_Callback6_t callbackonDtmfDigit, SWIG_Callback7_t callbackonCallTransferRequest, SWIG_Callback8_t callbackonCallTransferStatus, SWIG_Callback9_t callbackonCallReplaceRequest, SWIG_Callback10_t callbackonCallReplaced, SWIG_Callback11_t callbackonCallRxOffer, SWIG_Callback12_t callbackonInstantMessage, SWIG_Callback13_t callbackonInstantMessageStatus, SWIG_Callback14_t callbackonTypingIndication, SWIG_Callback15_t callbackonCallRedirected, SWIG_Callback16_t callbackonCallMediaTransportState, SWIG_Callback17_t callbackonCallMediaEvent, SWIG_Callback18_t callbackonCreateMediaTransport);

private:
    SWIG_Callback0_t swig_callbackonCallState;
    SWIG_Callback1_t swig_callbackonCallTsxState;
    SWIG_Callback2_t swig_callbackonCallMediaState;
    SWIG_Callback3_t swig_callbackonCallSdpCreated;
    SWIG_Callback4_t swig_callbackonStreamCreated;
    SWIG_Callback5_t swig_callbackonStreamDestroyed;
    SWIG_Callback6_t swig_callbackonDtmfDigit;
    SWIG_Callback7_t swig_callbackonCallTransferRequest;
    SWIG_Callback8_t swig_callbackonCallTransferStatus;
    SWIG_Callback9_t swig_callbackonCallReplaceRequest;
    SWIG_Callback10_t swig_callbackonCallReplaced;
    SWIG_Callback11_t swig_callbackonCallRxOffer;
    SWIG_Callback12_t swig_callbackonInstantMessage;
    SWIG_Callback13_t swig_callbackonInstantMessageStatus;
    SWIG_Callback14_t swig_callbackonTypingIndication;
    SWIG_Callback15_t swig_callbackonCallRedirected;
    SWIG_Callback16_t swig_callbackonCallMediaTransportState;
    SWIG_Callback17_t swig_callbackonCallMediaEvent;
    SWIG_Callback18_t swig_callbackonCreateMediaTransport;
    void swig_init_callbacks();
};

class SwigDirector_LogWriter : public pj::LogWriter, public Swig::Director {

public:
    SwigDirector_LogWriter();
    virtual ~SwigDirector_LogWriter();
    virtual void write(pj::LogEntry const &entry);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackwrite);

private:
    SWIG_Callback0_t swig_callbackwrite;
    void swig_init_callbacks();
};

class SwigDirector_Endpoint : public pj::Endpoint, public Swig::Director {

public:
    SwigDirector_Endpoint();
    virtual ~SwigDirector_Endpoint();
    virtual void onNatDetectionComplete(pj::OnNatDetectionCompleteParam const &prm);
    virtual void onNatCheckStunServersComplete(pj::OnNatCheckStunServersCompleteParam const &prm);
    virtual void onTransportState(pj::OnTransportStateParam const &prm);
    virtual void onTimer(pj::OnTimerParam const &prm);
    virtual void onSelectAccount(pj::OnSelectAccountParam &prm);

    typedef void (SWIGSTDCALL* SWIG_Callback0_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback1_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback2_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback3_t)(void *);
    typedef void (SWIGSTDCALL* SWIG_Callback4_t)(void *);
    void swig_connect_director(SWIG_Callback0_t callbackonNatDetectionComplete, SWIG_Callback1_t callbackonNatCheckStunServersComplete, SWIG_Callback2_t callbackonTransportState, SWIG_Callback3_t callbackonTimer, SWIG_Callback4_t callbackonSelectAccount);

private:
    SWIG_Callback0_t swig_callbackonNatDetectionComplete;
    SWIG_Callback1_t swig_callbackonNatCheckStunServersComplete;
    SWIG_Callback2_t swig_callbackonTransportState;
    SWIG_Callback3_t swig_callbackonTimer;
    SWIG_Callback4_t swig_callbackonSelectAccount;
    void swig_init_callbacks();
};


#endif