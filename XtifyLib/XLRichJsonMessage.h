//
//  XLRichJsonMessage.h
//  Json parser
//
//  Created by gilad on 1/25/12.
//  Copyright Xtify 2012. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface XLRichJsonMessage : NSObject  {

	NSString    *ver,   // Xtify Internal Version No.
                *mid,   // Message ID. Xtify identifier for the Rich Message
                *subject,// Message Subject
                *content,// Message Content
                *ruleLat,// Handled by Xtify platform: Location rule coordinate, when message fired as a result of device location update (or device check-in)
                *ruleLon,       // Same as above for longitude
                *response,      // Internal use
                *date,          // Timestamp (Standard time) when the message fired
                *expirationDate;// Message expiration timestamp
    
	NSString    *userLat,       // If message was fired because of location trigger, the user coordinates at the time the message was fired
                *userLon,       // Same as above for longitude
                *actionType,    // Message Action Type. Possible values are: PHN,WEb,CST or NONE
                *actionData,     // The data used when user selects the action label. Example, a phone number or a URL.
                *actionLabel;   // The label appeared in the Rich Notification Details page, if actionType is different than NONE

}

@property (nonatomic, retain) NSString *ver,*mid, *subject, *content, *ruleLat, *ruleLon,*response,*date, *expirationDate;
@property (nonatomic, retain) 	NSString *userLat, *userLon,*actionType,*actionData,*actionLabel;

@end
