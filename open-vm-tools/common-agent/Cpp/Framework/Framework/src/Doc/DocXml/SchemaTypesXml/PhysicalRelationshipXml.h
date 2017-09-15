/*
 *  Author: bwilliams
 *  Created: April 6, 2012
 *
 *  Copyright (c) 2012 Vmware, Inc.  All rights reserved.
 *  -- VMware Confidential
 *
 *  This code was generated by the script "build/dev/codeGen/genCppXml". Please
 *  speak to Brian W. before modifying it by hand.
 *
 */

#ifndef PhysicalRelationshipXml_h_
#define PhysicalRelationshipXml_h_

namespace Caf {

	/// Streams the PhysicalRelationship class to/from XML
	namespace PhysicalRelationshipXml {

		/// Adds the PhysicalRelationshipDoc into the XML.
		void SCHEMATYPESXML_LINKAGE add(
			const SmartPtrCPhysicalRelationshipDoc physicalRelationshipDoc,
			const SmartPtrCXmlElement thisXml);

		/// Parses the PhysicalRelationshipDoc from the XML.
		SmartPtrCPhysicalRelationshipDoc SCHEMATYPESXML_LINKAGE parse(
			const SmartPtrCXmlElement thisXml);
	}
}

#endif